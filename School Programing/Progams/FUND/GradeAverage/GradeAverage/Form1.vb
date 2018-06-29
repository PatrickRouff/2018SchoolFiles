Public Class Form1
    Private Sub btnexit_Click(sender As Object, e As EventArgs) Handles btnexit.Click
        Me.Close()
    End Sub
    Private Sub btncalc_Click(sender As Object, e As EventArgs) Handles btncalc.Click
        Dim score1, score2, score3, score4, average As Double
        Dim run As Boolean
        Dim name As String
        run = True
        name = txtboxname.Text
        If txtboxs1.Text <> "" And txtboxs2.Text <> "" And txtboxs3.Text <> "" And txtboxs4.Text <> "" Then
            If (True = (IsNumeric((txtboxs1.Text)))) And (True = (IsNumeric(txtboxs2.Text))) And (True = (IsNumeric(txtboxs3.Text))) And (True = (IsNumeric(txtboxs4.Text))) Then
                If (Convert.ToDouble(txtboxs1.Text) >= 0) And (Convert.ToDouble(txtboxs2.Text) >= 0) And (Convert.ToDouble(txtboxs3.Text) >= 0) And (Convert.ToDouble(txtboxs4.Text) >= 0) Then
                    score1 = Convert.ToDouble(txtboxs1.Text)
                    score2 = Convert.ToDouble(txtboxs2.Text)
                    score3 = Convert.ToDouble(txtboxs3.Text)
                    score4 = Convert.ToDouble(txtboxs4.Text)
                End If
            End If
        End If
        If txtboxs1.Text = "" Or txtboxs2.Text = "" Or txtboxs3.Text = "" Or txtboxs4.Text = "" Then
            Me.lbloutput.Text = "No Input"
            run = False
        End If
        If (False = (IsNumeric((txtboxs1.Text)))) Or (False = (IsNumeric(txtboxs2.Text))) Or (False = (IsNumeric(txtboxs3.Text))) Or (False = (IsNumeric(txtboxs4.Text))) Then
            Me.lbloutput.Text = "Invalid Input notnum"
            run = False
        End If
        If (True = (IsNumeric((txtboxs1.Text)))) And (True = (IsNumeric(txtboxs2.Text))) And (True = (IsNumeric(txtboxs3.Text))) And (True = (IsNumeric(txtboxs4.Text))) Then
            If (Convert.ToDouble(txtboxs1.Text) < 0) Or (Convert.ToDouble(txtboxs2.Text) < 0) Or (Convert.ToDouble(txtboxs3.Text) < 0) Or (Convert.ToDouble(txtboxs4.Text) < 0) Then
                Me.lbloutput.Text = "Invalid Input"
                run = False
            End If
        End If
        If run Then
            average = (score1 + score2 + score3 + score4) / 4
            If name = "Johnny Depp" Then
                lbloutput.Text = "Hello " & name & "!" & ControlChars.NewLine & "Your Grade Average: " & Convert.ToString(average) & ControlChars.NewLine & "Hello Captain Jack!"
            End If
            If name <> "Johnny Depp" Then
                lbloutput.Text = "Hello " & name & "!" & ControlChars.NewLine & "Your Grade Average: " & Convert.ToString(average) & ControlChars.NewLine & "You are not a pirate!"
            End If
        End If
    End Sub
End Class
