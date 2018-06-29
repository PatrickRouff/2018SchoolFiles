Public Class Form1
    Dim xTest As String
    Dim total As Double
    Dim ran As Boolean
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        ran = False
        Label1.Text = ""
        Label2.Text = ""
        Do
            xTest = InputBox("Enter a number to add", "Add Program", "Number")
            If IsNumeric(xTest) Then
                total += Convert.ToDouble(xTest)
                Label2.Text = Convert.ToString(total)
                Label1.Text += ControlChars.NewLine & xTest
                ran = True
            End If
        Loop While IsNumeric(xTest)
        If Not ran Then
            Label1.Text = "No Numbers Entered"
        End If
    End Sub
End Class
