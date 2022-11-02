using System.Collections.Generic;
using TMPro;
using UnityEngine;

public static class DropdownExtensions
{
    public static void SetValueOrCreate(this TMP_Dropdown dropdown, string value)
    {
        int foundValue = -1;
        for (int i = 0; i < dropdown.options.Count; i++)
        {
            TMP_Dropdown.OptionData od = dropdown.options[i];
            if (od.text == value)
            {
                foundValue = i;
                dropdown.value = i;
            }
        }
        if (foundValue == -1)
        {
            dropdown.AddOptions(new List<string>() { value });
            dropdown.SetValueOrCreate(value);
        }
    }
    public static string FindDropdownValue(this TMP_Dropdown dropdown)
    {
        if (dropdown?.options.Count == 0) return null;
        string val = dropdown?.options[Mathf.Clamp(dropdown.value, 0, dropdown.options.Count)].text;
        return val;
    }
    public static void FillDropdown(this TMP_Dropdown dropdown, GameObject[] list, bool clearBefore)
    {
        if (clearBefore)
            dropdown.ClearOptions();
        foreach (GameObject cg in list)
            if (cg != null)
                dropdown.AddOptions(new List<string>() { (cg.name) });
    }
    public static void FillDropdown(this TMP_Dropdown dropdown, string[] list, bool clearBefore)
    {
        if (clearBefore)
            dropdown.ClearOptions();
        dropdown.AddOptions(new List<string>(list));
    }
    public static void FillDropdownNoDuplicates(this TMP_Dropdown dropdown, GameObject[] list, bool clearBefore)
    {
        List<string> ls = new List<string>();
        foreach (GameObject cg in list)
            if (cg != null) ls.Add(cg.name);
        dropdown.FillDropdownNoDuplicates(ls.ToArray(), clearBefore);
    }
    public static void FillDropdownNoDuplicates(this TMP_Dropdown dropdown, string[] list, bool clearBefore)
    {
        if (clearBefore)
            dropdown.ClearOptions();
        foreach (string v in list)
        {
            bool found = false;
            for (int i = 0; i < dropdown.options.Count; i++)
            {
                TMP_Dropdown.OptionData od = dropdown.options[i];
                if (od.text == v)
                {
                    found = true;
                    break;
                }
            }
            if (!found)
                dropdown.AddOptions(new List<string>() { v });
        }

    }
    public static void FillDropdown(this TMP_Dropdown dropdown, TextAsset[] list)
    {
        dropdown.ClearOptions();
        foreach (TextAsset cg in list)
            dropdown.AddOptions(new List<string>() { (cg.name) });
    }
}
