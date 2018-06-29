Public Class Form1
    Dim init As Double
    Dim initTest As String
    Dim expen As Double
    Dim expenTest As String
    Dim curr As Double
    Dim i As Integer
    Dim ran As Boolean
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click

        initTest = InputBox("Enter Initial Amount", "Initial Funds", "0")
        expenTest = InputBox("Enter Daily Expenses", "Daily Expenses", "0")
        ran = False
        If (IsNumeric(initTest) And IsNumeric(expenTest)) Then
            init = Convert.ToDouble(initTest)
            expen = Convert.ToDouble(expenTest)
            If (init > expen) Then
                curr = init
                i = 1
                Do While (curr > expen)
                    curr = (curr - expen)
                    Label1.Text += ControlChars.NewLine & "After " & i.ToString & " day(s) you will have $" & curr.ToString & " left."
                    i += 1
                Loop
                ran = True
            End If
        End If
        If Not (ran) Then
            MessageBox.Show("Error")
        End If
    End Sub
End Class
