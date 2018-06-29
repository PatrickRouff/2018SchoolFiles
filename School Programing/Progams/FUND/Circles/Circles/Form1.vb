Public Class frmCircles
    Dim decPi As Double = 3.14159
    Dim price As Double
    Dim rad As Double
    Dim area As Double
    Dim cost As Double
    Dim format1 As String
    Dim format2 As String

    Private Sub btncalc_Click(sender As Object, e As EventArgs) Handles btncalc.Click
        rad = Convert.ToDouble(txtboxrad.Text)
        price = Convert.ToDouble(txtboxprice.Text)
        area = decPi * (rad ^ 2)
        cost = price * area
        format1 = "Total Area: " & Convert.ToString(Math.Round(area, 2)) & " square feet."
        format2 = "Total Cost: " & Convert.ToString(cost.ToString("C2")) & "."
        lbloutput.Text = format1 & vbCrLf & format2
    End Sub
End Class
