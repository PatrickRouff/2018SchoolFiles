Public Class MainForm

    Private Sub Label1_Click(sender As System.Object, e As System.EventArgs) Handles lblCapital.Click

    End Sub

    Private Sub btnAlabama_Click(sender As System.Object, e As System.EventArgs) Handles btnAlabama.Click
        Me.lblOutput.Text = "Montgomery"
    End Sub

    Private Sub btnAlaska_Click(sender As System.Object, e As System.EventArgs) Handles btnAlaska.Click
        Me.lblOutput.Text = "Juneau"
    End Sub

    Private Sub btnArizona_Click(sender As System.Object, e As System.EventArgs) Handles btnArizona.Click
        Me.lblOutput.Text = "Phoenix"
    End Sub

    Private Sub btnArkansas_Click(sender As System.Object, e As System.EventArgs) Handles btnArkansas.Click
        Me.lblOutput.Text = "Little Rock"
    End Sub

    Private Sub btnExit_Click(sender As System.Object, e As System.EventArgs) Handles btnExit.Click
        Me.Close()
    End Sub
End Class
