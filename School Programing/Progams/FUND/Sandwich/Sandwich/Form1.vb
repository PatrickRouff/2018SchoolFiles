Public Class Form1
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim size As Double
        Dim extra, output As String
        extra = ""
        output = ""
        If radhalf.Checked Then
            size = 2.5
        End If
        If radfoot.Checked Then
            size = 4.0
        End If
        If chklettuce.Checked Then
            extra = "Lettuce"
        End If
        If chktomato.Checked Then
            If extra <> "" Then
                extra += ", Tomato"
            Else
                extra += "Tomato"
            End If
        End If
        If chkcheese.Checked Then
            If extra <> "" Then
                extra += ", Cheese"
            Else
                extra += "Cheese"
            End If
        End If
        If chkmustard.Checked Then
            If extra <> "" Then
                extra += ", Mustard"
            Else
                extra += "Mustard"
            End If
            If extra = "" Then
                extra = "None"
            End If
        End If
        output = "Cost: " & size.ToString("C2") & ". Extras Requested: " & extra & "."
        MessageBox.Show(output, "Order Placed", MessageBoxButtons.OK, MessageBoxIcon.Exclamation, MessageBoxDefaultButton.Button1)
    End Sub

    Private Sub btnexit_Click(sender As Object, e As EventArgs) Handles btnexit.Click
        Me.Close()
    End Sub
End Class
