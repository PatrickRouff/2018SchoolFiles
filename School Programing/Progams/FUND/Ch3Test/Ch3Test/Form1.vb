Public Class Form1
    Dim num As Integer
    Dim total As Integer
    Dim ave As Double
    Dim grade As Char
    Dim input As String
    Dim org As String

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        num = 0
        input = InputBox("Enter Score: ", "Score Entry")
        Do While input <> ""
            total += Convert.ToInt16(input)
            org += input & " "
            num += 1
            input = InputBox("Enter Score: ", "Score Entry")
        Loop
        Label1.Text = org
        ave = total / num
        If (ave >= 90) Then
            grade = "A"
        ElseIf (ave >= 80) Then
            grade = "B"
        ElseIf (ave >= 70) Then
            grade = "C"
        ElseIf (ave >= 60) Then
            grade = "D"
        ElseIf (ave >= 0) Then
            grade = "F"
        End If

        Label2.Text = "The average score is " & ave.ToString("N1") & ControlChars.NewLine & "The average grade is " & grade
    End Sub
End Class
