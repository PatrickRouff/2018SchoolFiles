Public Class Form1
    Dim oldprice As Double
    Dim newprice As Double
    Private Sub btncalc_Click(sender As Object, e As EventArgs) Handles btncalc.Click
        oldprice = Convert.ToDouble(txtboxorig.Text)
        newprice = oldprice * 0.75
        lblnewpriceoutput.Text = newprice.ToString("C2")
    End Sub
End Class
