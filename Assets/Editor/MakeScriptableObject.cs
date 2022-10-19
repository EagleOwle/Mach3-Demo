using UnityEngine;
using UnityEditor;

public class MakeScriptableObject : MonoBehaviour
{
    [MenuItem("Assets/Create/PrefabStore")]
    public static void CreatePrefabStore()
    {
        PrefabStore asset = ScriptableObject.CreateInstance<PrefabStore>();

        AssetDatabase.CreateAsset(asset, "Assets/Resources/PrefabStore.asset");
        AssetDatabase.SaveAssets();

        EditorUtility.FocusProjectWindow();

        Selection.activeObject = asset;
    }

    [MenuItem("Assets/Create/GamePreference")]
    public static void CreateGamePreference()
    {
        Match.GamePreference asset = ScriptableObject.CreateInstance<Match.GamePreference>();

        AssetDatabase.CreateAsset(asset, "Assets/Resources/GamePreference.asset");
        AssetDatabase.SaveAssets();

        EditorUtility.FocusProjectWindow();

        Selection.activeObject = asset;
    }

}
