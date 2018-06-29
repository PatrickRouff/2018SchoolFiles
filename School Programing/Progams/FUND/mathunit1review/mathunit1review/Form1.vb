Public Class Form1
    Dim namein As String
    Dim num1 As Double
    Dim num2 As Double
    Dim extra1 As Double
    Dim extra2 As String
    Private Sub btnadd_Click(sender As Object, e As EventArgs) Handles btnadd.Click
        num1 = Convert.ToDouble(txtboxnum1.Text)
        num2 = Convert.ToDouble(txtboxnum2.Text)
        namein = txtboxname.Text
        extra1 = num1 + num2
        extra2 = Convert.ToString(extra1)
        lbloutput.Text = namein & ", the sum is " & extra2
    End Sub

    Private Sub btnminus_Click(sender As Object, e As EventArgs) Handles btnminus.Click
        num1 = Convert.ToDouble(txtboxnum1.Text)
        num2 = Convert.ToDouble(txtboxnum2.Text)
        namein = txtboxname.Text
        extra1 = num1 - num2
        extra2 = Convert.ToString(extra1)
        lbloutput.Text = namein & ", the difference is " & extra2
    End Sub

    Private Sub btntimes_Click(sender As Object, e As EventArgs) Handles btntimes.Click
        num1 = Convert.ToDouble(txtboxnum1.Text)
        num2 = Convert.ToDouble(txtboxnum2.Text)
        namein = txtboxname.Text
        extra1 = num1 * num2
        extra2 = Convert.ToString(extra1)
        lbloutput.Text = namein & ", the product is " & extra2
    End Sub

    Private Sub btndiv_Click(sender As Object, e As EventArgs) Handles btndiv.Click
        num1 = Convert.ToDouble(txtboxnum1.Text)
        num2 = Convert.ToDouble(txtboxnum2.Text)
        namein = txtboxname.Text
        extra1 = num1 / num2
        extra2 = Convert.ToString(extra1)
        lbloutput.Text = namein & ", the quoietent is " & extra2
    End Sub

    Private Sub btnclear_Click(sender As Object, e As EventArgs) Handles btnclear.Click
        txtboxname.Text = "Name"
        txtboxnum1.Text = "A Number"
        txtboxnum2.Text = "Another Number"
        lbloutput.Text = " "
    End Sub
End Class
