Public Class Form1
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim num As Integer
        Dim output As String
        num = Convert.ToInt32(TextBox1.Text)
        If num < 500 Then
            output = "Cost: " & (num * 0.1).ToString("C2")
            MessageBox.Show(output, "Order Placed", MessageBoxButtons.OK, MessageBoxIcon.Exclamation, MessageBoxDefaultButton.Button1)
        ElseIf num < 750 Then
            output = "Cost: " & (num * 0.08).ToString("C2")
            MessageBox.Show(output, "Order Placed", MessageBoxButtons.OK, MessageBoxIcon.Exclamation, MessageBoxDefaultButton.Button1)
        ElseIf num < 1000 Then
            output = "Cost: " & (num * 0.06).ToString("C2")
            MessageBox.Show(output, "Order Placed", MessageBoxButtons.OK, MessageBoxIcon.Exclamation, MessageBoxDefaultButton.Button1)
        Else
            output = "Cost: " & (num * 0.05).ToString("C2")
            MessageBox.Show(output, "Order Placed", MessageBoxButtons.OK, MessageBoxIcon.Exclamation, MessageBoxDefaultButton.Button1)
        End If
    End Sub
End Class
