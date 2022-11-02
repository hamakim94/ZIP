using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class NineSoftSliderAnimation : MonoBehaviour
{
    [SerializeField] private bool RandomPosition = false;
    [SerializeField] private bool RandomRotation = true;

    [Space(20)]
    [SerializeField] private Text textPrefab;
    private Slider slider;

    private void Awake()
    {
        slider = GetComponent<Slider>();
        slider.onValueChanged.AddListener(ChangeValue);
    }
    public void ChangeValue(float v)
    {
        Debug.Log("ChangeValue: " + v);
        CreateText(v);
    }

    private void CreateText(float v)
    {
        if (textPrefab == null) return;

        Text t = Instantiate(textPrefab);

        t.text = v.ToString("0.#");

        t.transform.parent = this.transform.transform;
        t.transform.position = this.transform.position + (RandomPosition ? new Vector3(Random.Range(-150, 150), Random.Range(-70, 70)) : new Vector3(slider.handleRect.transform.localPosition.x, 50));

        if (RandomRotation) t.transform.rotation = Quaternion.Euler(0, 0, Random.Range(-45, 45));

        StartCoroutine(DestroyText(t));
    }

    private IEnumerator DestroyText(Text text)
    {
        yield return new WaitForSeconds(1);
        float t = 0;
        while (t < 1)
        {
            t += Time.deltaTime * .25f;
            Color c = text.color;
            c.a = Mathf.Lerp(c.a, 0, t);
            text.color = c;
            yield return null;
        }

        Destroy(text.gameObject);
    }
}
