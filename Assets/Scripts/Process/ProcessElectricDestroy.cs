
public class ProcessElectricDestroy : Process
{
    protected override void EndProcess()
    {
        if (this.endProcessListener != null)
        {
            this.endProcessListener.EndProcess(this);
        }
        Destroy(this);
    }
}
