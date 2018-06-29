Public Class Form1
    Private Sub btnshow_Click(sender As System.Object, e As System.EventArgs) Handles btnshow.Click
        PictureBox1.Show()
        lblhello.Text = ("Hello There!")
    End Sub

    Private Sub btnexit_Click(sender As System.Object, e As System.EventArgs) Handles btnexit.Click
        Me.Close()
    End Sub

    Private Sub PictureBox1_DoubleClick(sender As Object, e As System.EventArgs) Handles PictureBox1.DoubleClick
        PictureBox1.Hide()
        lblhello.Text = ("Where did I go?")
    End Sub

    Private Sub lblhello_Click(sender As Object, e As System.EventArgs) Handles lblhello.Click
        lblhello.ForeColor = Color.Aqua

    End Sub

    Private Sub lblhello_DoubleClick(sender As Object, e As System.EventArgs) Handles lblhello.DoubleClick
        lblhello.ForeColor = Color.Yellow

    End Sub

    Private Sub tmrappear_Tick(sender As System.Object, e As System.EventArgs) Handles tmrappear.Tick
        PictureBox1.Show()
        lblhello.Text = ("Hello There!")
    End Sub

    Private Sub tmrdisappear_Tick(sender As System.Object, e As System.EventArgs) Handles tmrdisappear.Tick
        PictureBox1.Hide()
        lblhello.Text = ("Where did I go?")
        tmrappear.Stop()
    End Sub

    Private Sub tmrreappear_Tick(sender As System.Object, e As System.EventArgs) Handles tmrreappear.Tick
        PictureBox1.Show()
        lblhello.Text = ("Peek-a-Boo! I got you!")
        tmrdisappear.Stop()
        tmrreappear.Stop()
    End Sub
End Class
