Public Class Form1
    Dim x As Integer
    Dim i As Integer
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        i = 1
        x = 10
        Do While (i <= x)
            MessageBox.Show(i.ToString)
            i += 1
        Loop
    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        Me.Close()
    End Sub
End Class
