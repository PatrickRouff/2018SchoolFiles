Public Class Form1
    Dim diam As Double
    Dim price As Double
    Dim extra1 As Double
    Dim extra2 As String
    Private Sub btnexit_Click(sender As Object, e As EventArgs) Handles btnexit.Click
        Me.Close()
    End Sub
    Private Sub btncalc_Click(sender As Object, e As EventArgs) Handles btncalc.Click
        diam = Convert.ToDouble(txtboxdiam.Text)
        price = Convert.ToDouble(txtboxprice.Text)
        lblcircum.Text = "Circumference: " & Convert.ToString(diam * 3.142)
        extra1 = (diam * 3.142) * price
        extra2 = extra1.ToString("C2")
        lblprice.Text = "Price: " & extra2
    End Sub
End Class
