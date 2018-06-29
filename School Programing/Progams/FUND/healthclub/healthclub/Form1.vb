Public Class Form1
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim plan, extra As Double
        extra = 0
        If radsingle.Checked Then
            plan = 50
            If chktennis.Checked Then
                extra += 30
            End If
            If chkgolf.Checked Then
                extra += 25
            End If
            If chkswim.Checked Then
                extra += 20
            End If
        End If
        If radfamily.Checked Then
            plan = 90
            If chktennis.Checked Then
                extra += 50
            End If
            If chkgolf.Checked Then
                extra += 35
            End If
            If chkswim.Checked Then
                extra += 30
            End If
        End If
        lblbasic.Text = plan.ToString("C2")
        lblextra.Text = extra.ToString("C2")
        lbltotal.Text = (plan + extra).ToString("C2")
    End Sub

    Private Sub btnexit_Click(sender As Object, e As EventArgs) Handles btnexit.Click
        Me.Close()
    End Sub
End Class
