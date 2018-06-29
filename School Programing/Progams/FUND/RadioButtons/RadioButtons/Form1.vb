Public Class Form1
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim des, dri As Double
        Dim extras As String
        extras = ""
        des = 0
        dri = 0
        If radpie.Checked Then
            des = 2.5
        End If
        If radcookie.Checked Then
            des = 0.75
        End If
        If radcake.Checked Then
            des = 2.25
        End If
        If radicecream.Checked Then
            des = 1.45
        End If
        If radsoda.Checked Then
            dri = 0.75
        End If
        If radtea.Checked Then
            dri = 0.6
        End If
        If radcoffee.Checked Then
            dri = 0.5
        End If
        If chksugar.Checked Then
            extras += "Sugar "
        End If
        If chklemon.Checked Then
            extras += "Lemon "
        End If
        If chksweetener.Checked Then
            extras += "Sweetener "
        End If
        If extras = "" Then
            extras = "None"
        End If
        lbloutput.Text = "Total: " & (des + dri).ToString("C2") & " You have requested: " & extras
    End Sub


End Class
