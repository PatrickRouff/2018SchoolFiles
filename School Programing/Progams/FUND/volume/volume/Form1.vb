Public Class Form1
    Dim d1 As Double
    Dim d2 As Double
    Dim d3 As Double
    Dim output As String
    Dim volume As Double
    Private Sub btncalc_Click(sender As Object, e As EventArgs) Handles btncalc.Click
        d1 = Convert.ToDouble(txtboxd1.Text)
        d2 = Convert.ToDouble(txtboxd2.Text)
        d3 = Convert.ToDouble(txtboxd3.Text)
        volume = d1 * d2 * d3
        output = "Volume: " & Convert.ToString(volume)
        lbloutput.Text = output
    End Sub
End Class
