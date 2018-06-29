Public Class Form1
    Dim ticker As Integer = 0

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim inclass As Double
        Dim quiz As Double
        Dim part As Double
        Dim Sem As Double
        Dim Grade As Char
        inclass = Convert.ToDouble(TextBox1.Text)
        quiz = Convert.ToDouble(TextBox2.Text)
        part = Convert.ToDouble(TextBox3.Text)
        Sem = (0.6 * inclass) + (0.25 * quiz) + (0.15 * part)
        If (Sem >= 90) Then
            Grade = "A"
        ElseIf (Sem >= 80) Then
            Grade = "B"
        ElseIf (Sem >= 70) Then
            Grade = "C"
        ElseIf (Sem >= 60) Then
            Grade = "D"
        Else
            Grade = "F"
        End If
        MessageBox.Show("Your grade is " & Grade & ".")
    End Sub

    Private Sub Timer1_Tick(sender As Object, e As EventArgs) Handles Timer1.Tick

        ticker = ticker + 1
        Dim posx As Integer
        Dim posy As Integer
        posy = 13
        If ((ticker Mod 7) = 0) Then
            posx = 13
        ElseIf ((ticker Mod 7) = 1) Then
            posx = 23
        ElseIf ((ticker Mod 7) = 2) Then
            posx = 33
        ElseIf ((ticker Mod 7) = 3) Then
            posx = 43
        ElseIf ((ticker Mod 7) = 4) Then
            posx = 33
        ElseIf ((ticker Mod 7) = 5) Then
            posx = 23
        ElseIf ((ticker Mod 7) = 6) Then
            posx = 13
        End If
        PictureBox1.Location = New Point(posx, posy)

    End Sub
End Class
