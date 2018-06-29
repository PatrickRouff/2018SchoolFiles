Public Class Form1
    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load

    End Sub

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim score1, score2, score3, average As Double
        Dim run As Boolean
        run = True
        If txtboxs1.Text <> "" And txtboxs2.Text <> "" And txtboxs3.Text <> "" Then
            If (True = (IsNumeric((txtboxs1.Text)))) And (True = (IsNumeric(txtboxs2.Text))) And (True = (IsNumeric(txtboxs3.Text))) Then
                If (Convert.ToDouble(txtboxs1.Text) >= 0) And (Convert.ToDouble(txtboxs2.Text) >= 0) And (Convert.ToDouble(txtboxs3.Text) >= 0) Then
                    score1 = Convert.ToDouble(txtboxs1.Text)
                    score2 = Convert.ToDouble(txtboxs2.Text)
                    score3 = Convert.ToDouble(txtboxs3.Text)
                End If
            End If
        End If
        If txtboxs1.Text = "" Or txtboxs2.Text = "" Or txtboxs3.Text = "" Then
            Me.lbloutput.Text = "No Input"
            run = False
        End If
        If (False = (IsNumeric((txtboxs1.Text)))) Or (False = (IsNumeric(txtboxs2.Text))) Or (False = (IsNumeric(txtboxs3.Text))) Then
            Me.lbloutput.Text = "Invalid Input notnum"
            run = False
        End If
        If (True = (IsNumeric((txtboxs1.Text)))) And (True = (IsNumeric(txtboxs2.Text))) And (True = (IsNumeric(txtboxs3.Text))) Then
            If (Convert.ToDouble(txtboxs1.Text) < 0) Or (Convert.ToDouble(txtboxs2.Text) < 0) Or (Convert.ToDouble(txtboxs3.Text) < 0) Then
                Me.lbloutput.Text = "Invalid Input"
                run = False
            End If
        End If
        If run Then
            average = (score1 + score2 + score3) / 3
            If (average >= 90) Then
                lbloutput.Text = "Grade Average: A"
            ElseIf (average >= 80) Then
                lbloutput.Text = "Grade Average: B"
            ElseIf (average >= 70) Then
                lbloutput.Text = "Grade Average: C"
            ElseIf (average >= 60) Then
                lbloutput.Text = "Grade Average: D"
            ElseIf (average >= 0) Then
                lbloutput.Text = "Grade Average: F"
            End If
        End If
    End Sub
End Class
