Public Class Form1
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim run As Boolean
        Dim s1, s2, s3 As Double
        run = True
        If txtboxs1.Text <> "" And txtboxs2.Text <> "" And txtboxs3.Text <> "" Then
            If (True = (IsNumeric((txtboxs1.Text)))) And (True = (IsNumeric(txtboxs2.Text))) And (True = (IsNumeric(txtboxs3.Text))) Then
                If (Convert.ToDouble(txtboxs1.Text) >= 0) And (Convert.ToDouble(txtboxs2.Text) >= 0) And (Convert.ToDouble(txtboxs3.Text) >= 0) Then
                    s1 = Convert.ToDouble(txtboxs1.Text)
                    s2 = Convert.ToDouble(txtboxs2.Text)
                    s3 = Convert.ToDouble(txtboxs3.Text)
                End If
            End If
        End If
        If txtboxs1.Text = "" Or txtboxs2.Text = "" Or txtboxs3.Text = "" Then
            MessageBox.Show("No Input", "Error", MessageBoxButtons.OK, MessageBoxIcon.Exclamation, MessageBoxDefaultButton.Button1)
            run = False
        End If
        If (False = (IsNumeric((txtboxs1.Text)))) Or (False = (IsNumeric(txtboxs2.Text))) Or (False = (IsNumeric(txtboxs3.Text))) Then
            MessageBox.Show("Input Must Be Numeric", "Error", MessageBoxButtons.OK, MessageBoxIcon.Exclamation, MessageBoxDefaultButton.Button1)
            run = False
        End If
        If (True = (IsNumeric((txtboxs1.Text)))) And (True = (IsNumeric(txtboxs2.Text))) And (True = (IsNumeric(txtboxs3.Text))) Then
            If (Convert.ToDouble(txtboxs1.Text) < 0) Or (Convert.ToDouble(txtboxs2.Text) < 0) Or (Convert.ToDouble(txtboxs3.Text) < 0) Then
                MessageBox.Show("Input Must Be Positive", "Error", MessageBoxButtons.OK, MessageBoxIcon.Exclamation, MessageBoxDefaultButton.Button1)
                run = False
            End If
        End If
        If run Then
            If ((s1 + s2) > s3) And ((s1 + s3) > s2) And ((s3 + s2) > s1) Then
                MessageBox.Show("You have a triangle!", "Result", MessageBoxButtons.OK, MessageBoxIcon.Exclamation, MessageBoxDefaultButton.Button1)
            Else
                MessageBox.Show("That is not a triangle.", "Result", MessageBoxButtons.OK, MessageBoxIcon.Exclamation, MessageBoxDefaultButton.Button1)
            End If
        End If
    End Sub
End Class
