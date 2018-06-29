Public Class Form1
    Dim intNum1 As Integer
    Dim intNum2 As Integer

    Private Sub btnplus_Click(sender As System.Object, e As System.EventArgs) Handles btnplus.Click
        If txtbox1.Text <> "" Then
            If txtbox2.Text <> "" Then
                intNum1 = Convert.ToInt32(Me.txtbox1.Text)
                intNum2 = Convert.ToInt32(Me.txtbox2.Text)
                Me.lblAnswers.Text = Me.txtbox2.Text
                If intNum2.CompareTo(0) Then
                    Me.lblAnswers.Text = Convert.ToString(intNum1 + intNum2)
                End If
            End If
        End If
        If txtbox1.Text = "" Or txtbox2.Text = "" Then
            Me.lblAnswers.Text = "No Input"
        End If
    End Sub

    Private Sub btnminus_Click(sender As System.Object, e As System.EventArgs) Handles btnminus.Click
        If txtbox1.Text <> "" Then
            If txtbox2.Text <> "" Then
                intNum1 = Convert.ToInt32(Me.txtbox1.Text)
                intNum2 = Convert.ToInt32(Me.txtbox2.Text)
                Me.lblAnswers.Text = Me.txtbox2.Text
                If intNum2.CompareTo(0) Then
                    Me.lblAnswers.Text = Convert.ToString(intNum1 - intNum2)
                End If
            End If
        End If
        If txtbox1.Text = "" Or txtbox2.Text = "" Then
            Me.lblAnswers.Text = "No Input"
        End If
    End Sub

    Private Sub btntimes_Click(sender As System.Object, e As System.EventArgs) Handles btntimes.Click
        If txtbox1.Text <> "" Then
            If txtbox2.Text <> "" Then
                intNum1 = Convert.ToInt32(Me.txtbox1.Text)
                intNum2 = Convert.ToInt32(Me.txtbox2.Text)
                Me.lblAnswers.Text = Me.txtbox2.Text
                If intNum2.CompareTo(0) Then
                    Me.lblAnswers.Text = Convert.ToString(intNum1 * intNum2)
                End If
            End If
        End If
        If txtbox1.Text = "" Or txtbox2.Text = "" Then
            Me.lblAnswers.Text = "No Input"
        End If
    End Sub

    Private Sub btndivide_Click(sender As System.Object, e As System.EventArgs) Handles btndivide.Click
        If txtbox1.Text <> "" Then
            If txtbox2.Text <> "" Then
                intNum1 = Convert.ToInt32(Me.txtbox1.Text)
                intNum2 = Convert.ToInt32(Me.txtbox2.Text)
                Me.lblAnswers.Text = Me.txtbox2.Text
                If intNum2.CompareTo(0) Then
                    Me.lblAnswers.Text = Convert.ToString(intNum1 / intNum2)
                End If
            End If
        End If
        If txtbox1.Text = "" Or txtbox2.Text = "" Then
            Me.lblAnswers.Text = "No Input"
        End If
    End Sub

    Private Sub btnintdiv_Click(sender As System.Object, e As System.EventArgs) Handles btnintdiv.Click
        If txtbox1.Text <> "" Then
            If txtbox2.Text <> "" Then
                intNum1 = Convert.ToInt32(Me.txtbox1.Text)
                intNum2 = Convert.ToInt32(Me.txtbox2.Text)
                Me.lblAnswers.Text = Me.txtbox2.Text
                If intNum2.CompareTo(0) Then
                    Me.lblAnswers.Text = Convert.ToString(intNum1 \ intNum2)
                End If
            End If
        End If
        If txtbox1.Text = "" Or txtbox2.Text = "" Then
            Me.lblAnswers.Text = "No Input"
        End If
    End Sub

    Private Sub btnmod_Click(sender As System.Object, e As System.EventArgs) Handles btnmod.Click
        If txtbox1.Text <> "" Then
            If txtbox2.Text <> "" Then
                intNum1 = Convert.ToInt32(Me.txtbox1.Text)
                intNum2 = Convert.ToInt32(Me.txtbox2.Text)
                Me.lblAnswers.Text = Me.txtbox2.Text
                If intNum2.CompareTo(0) Then
                    Me.lblAnswers.Text = Convert.ToString(intNum1 Mod intNum2)
                End If
            End If
        End If
        If txtbox1.Text = "" Or txtbox2.Text = "" Then
            Me.lblAnswers.Text = "No Input"
        End If
    End Sub

    Private Sub btnpower_Click(sender As System.Object, e As System.EventArgs) Handles btnpower.Click
        If txtbox1.Text <> "" Then
            If txtbox2.Text <> "" Then
                intNum1 = Convert.ToInt32(Me.txtbox1.Text)
                intNum2 = Convert.ToInt32(Me.txtbox2.Text)
                Me.lblAnswers.Text = Me.txtbox2.Text
                If intNum2.CompareTo(0) Then
                    Me.lblAnswers.Text = Convert.ToString(intNum1 ^ intNum2)
                End If
            End If
        End If
        If txtbox1.Text = "" Or txtbox2.Text = "" Then
            Me.lblAnswers.Text = "No Input"
        End If
    End Sub
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles btnexit.Click
        Me.Close()
    End Sub
End Class
