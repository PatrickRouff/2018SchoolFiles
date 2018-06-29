Public Class Form1
    Dim startvalue As Integer
    Dim endvalue As Integer
    Dim stepvalue As Integer
    Dim run As Boolean
    Dim run2 As Boolean
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        run = True
        If (False = (IsNumeric((TextBox1.Text)))) Or (False = (IsNumeric(TextBox2.Text))) Or (False = (IsNumeric(TextBox3.Text))) Then
            Me.Label1.Text = "Invalid Input"
            run = False
        End If
        If run Then
            run2 = True
            startvalue = Convert.ToInt16(TextBox1.Text)
            endvalue = Convert.ToInt16(TextBox2.Text)
            stepvalue = Convert.ToInt16(TextBox3.Text)
            If endvalue < startvalue Then
                If stepvalue > 0 Then
                    run2 = False
                End If
            End If
            If run2 Then
                For intCount = startvalue To endvalue Step stepvalue
                    Label1.Text += " " & Convert.ToString(intCount)
                Next intCount
            End If
            If (run2 = False) Then
                Label1.Text = "Invalid Input"
            End If
        End If
    End Sub
End Class