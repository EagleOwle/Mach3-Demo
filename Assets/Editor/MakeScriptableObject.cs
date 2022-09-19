using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

public class MakeScriptableObject : MonoBehaviour
{
    [MenuItem("Assets/Create/PrefabStore")]
    public static void CreateMyAsset()
    {
        PrefabStore asset = ScriptableObject.CreateInstance<PrefabStore>();

        AssetDatabase.CreateAsset(asset, "Assets/Resources/PrefabStore.asset");
        AssetDatabase.SaveAssets();

        EditorUtility.FocusProjectWindow();

        Selection.activeObject = asset;
    }
}
