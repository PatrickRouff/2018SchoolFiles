Public Class Form1
    Dim img1, img2, img3 As Integer
    Dim done1 = False, done2 = False, done3 = False, doneF As Boolean
    Private Sub btnpull1_Click(sender As Object, e As EventArgs) Handles btnpull1.Click
        Timer1.Start()
        Timer4.Start()
        done1 = False
    End Sub
    Private Sub btnpull2_Click(sender As Object, e As EventArgs) Handles btnpull2.Click
        Timer2.Start()
        done2 = False
    End Sub
    Private Sub btnpull3_Click(sender As Object, e As EventArgs) Handles btnpull3.Click
        Timer3.Start()
        done3 = False
    End Sub
    Private Sub Timer1_Tick(sender As Object, e As EventArgs) Handles Timer1.Tick
        If img1 = 3 Then
            img1 = 0
        End If
        img1 += 1
        If img1 = 1 Then
            picbox1.Image = Image.FromFile("C:\Users\mc123\Desktop\School Programing\My Stuff\FUND\slotmachine\slotmachine\Resources\bulls eye.png")
        End If
        If img1 = 2 Then
            picbox1.Image = Image.FromFile("C:\Users\mc123\Desktop\School Programing\My Stuff\FUND\slotmachine\slotmachine\Resources\dynamite.png")
        End If
        If img1 = 3 Then
            picbox1.Image = Image.FromFile("C:\Users\mc123\Desktop\School Programing\My Stuff\FUND\slotmachine\slotmachine\Resources\smiley face.png")
        End If
    End Sub
    Private Sub Timer2_Tick(sender As Object, e As EventArgs) Handles Timer2.Tick
        If img2 = 3 Then
            img2 = 0
        End If
        img2 += 1
        If img2 = 1 Then
            picbox2.Image = Image.FromFile("C:\Users\mc123\Desktop\School Programing\My Stuff\FUND\slotmachine\slotmachine\Resources\bulls eye.png")
        End If
        If img2 = 2 Then
            picbox2.Image = Image.FromFile("C:\Users\mc123\Desktop\School Programing\My Stuff\FUND\slotmachine\slotmachine\Resources\dynamite.png")
        End If
        If img2 = 3 Then
            picbox2.Image = Image.FromFile("C:\Users\mc123\Desktop\School Programing\My Stuff\FUND\slotmachine\slotmachine\Resources\smiley face.png")
        End If
    End Sub
    Private Sub Timer3_Tick(sender As Object, e As EventArgs) Handles Timer3.Tick
        If img3 = 3 Then
            img3 = 0
        End If
        img3 += 1
        If img3 = 1 Then
            picbox3.Image = Image.FromFile("C:\Users\mc123\Desktop\School Programing\My Stuff\FUND\slotmachine\slotmachine\Resources\bulls eye.png")
        End If
        If img3 = 2 Then
            picbox3.Image = Image.FromFile("C:\Users\mc123\Desktop\School Programing\My Stuff\FUND\slotmachine\slotmachine\Resources\dynamite.png")
        End If
        If img3 = 3 Then
            picbox3.Image = Image.FromFile("C:\Users\mc123\Desktop\School Programing\My Stuff\FUND\slotmachine\slotmachine\Resources\smiley face.png")
        End If
    End Sub
    Private Sub btnstop1_Click(sender As Object, e As EventArgs) Handles btnstop1.Click
        Timer1.Stop()
        done1 = True
    End Sub
    Private Sub btnstop2_Click(sender As Object, e As EventArgs) Handles btnstop2.Click
        Timer2.Stop()
        done2 = True
    End Sub
    Private Sub btnstop3_Click(sender As Object, e As EventArgs) Handles btnstop3.Click
        Timer3.Stop()
        done3 = True
    End Sub
    Private Sub Timer4_Tick(sender As Object, e As EventArgs) Handles Timer4.Tick
        If done1 And done2 And done3 Then
            btnprize.Visible = True
        Else
            btnprize.Visible = False
        End If
    End Sub
    Private Sub btnprize_Click(sender As Object, e As EventArgs) Handles btnprize.Click
        If img1 = 1 And img2 = 1 And img3 = 1 Then
            MessageBox.Show("You won a Billion Dollars!", "Prize", MessageBoxButtons.OK, MessageBoxIcon.Exclamation, MessageBoxDefaultButton.Button1)
        ElseIf img1 = 2 And img2 = 2 And img3 = 2 Then
            MessageBox.Show("You won one Dollar!", "Prize", MessageBoxButtons.OK, MessageBoxIcon.Exclamation, MessageBoxDefaultButton.Button1)
        ElseIf img1 = 3 And img2 = 3 And img3 = 3 Then
            MessageBox.Show("You won a Million Dollars!", "Prize", MessageBoxButtons.OK, MessageBoxIcon.Exclamation, MessageBoxDefaultButton.Button1)
        Else
            MessageBox.Show("You did not win anything.", "Prize", MessageBoxButtons.OK, MessageBoxIcon.Exclamation, MessageBoxDefaultButton.Button1)
        End If
    End Sub
End Class
