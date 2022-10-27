using UnityEngine;
using UnityEditor;

public class MakeScriptableObject : MonoBehaviour
{
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
