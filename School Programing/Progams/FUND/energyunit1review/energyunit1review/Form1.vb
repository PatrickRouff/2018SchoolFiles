Public Class Form1
    Dim c As Double
    Dim mass As Double
    Dim energy As Double
    Dim bulbs As Double
    Dim extra1 As String
    Dim extra2 As String

    Private Sub btncalc_Click(sender As Object, e As EventArgs) Handles btncalc.Click
        c = 3 * (10 ^ 8)
        mass = Convert.ToDouble(txtboxmass.Text)
        energy = mass * (c ^ 2)
        extra1 = Convert.ToString(energy)
        lblenergy.Text = "The Energy is " & extra1 & " joules."
        bulbs = energy / 360000
        extra2 = Convert.ToString(bulbs)
        lblbulbs.Text = "You can light " & extra2 & " light bulbs."
    End Sub

    Private Sub btnbulb_Click(sender As Object, e As EventArgs) Handles btnbulb.Click
        lblbulbs.BackColor = Color.Yellow
        lblenergy.BackColor = Color.Yellow
    End Sub
End Class
