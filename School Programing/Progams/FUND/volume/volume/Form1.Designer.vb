<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class Form1
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Me.txtboxd2 = New System.Windows.Forms.TextBox()
        Me.txtboxd1 = New System.Windows.Forms.TextBox()
        Me.txtboxd3 = New System.Windows.Forms.TextBox()
        Me.btncalc = New System.Windows.Forms.Button()
        Me.lbloutput = New System.Windows.Forms.Label()
        Me.SuspendLayout()
        '
        'txtboxd2
        '
        Me.txtboxd2.Location = New System.Drawing.Point(12, 38)
        Me.txtboxd2.Name = "txtboxd2"
        Me.txtboxd2.Size = New System.Drawing.Size(100, 20)
        Me.txtboxd2.TabIndex = 0
        Me.txtboxd2.Text = "Dimension 2"
        '
        'txtboxd1
        '
        Me.txtboxd1.Location = New System.Drawing.Point(12, 12)
        Me.txtboxd1.Name = "txtboxd1"
        Me.txtboxd1.Size = New System.Drawing.Size(100, 20)
        Me.txtboxd1.TabIndex = 1
        Me.txtboxd1.Text = "Dimension 1"
        '
        'txtboxd3
        '
        Me.txtboxd3.Location = New System.Drawing.Point(12, 64)
        Me.txtboxd3.Name = "txtboxd3"
        Me.txtboxd3.Size = New System.Drawing.Size(100, 20)
        Me.txtboxd3.TabIndex = 2
        Me.txtboxd3.Text = "Dimension 3"
        '
        'btncalc
        '
        Me.btncalc.Location = New System.Drawing.Point(12, 90)
        Me.btncalc.Name = "btncalc"
        Me.btncalc.Size = New System.Drawing.Size(100, 23)
        Me.btncalc.TabIndex = 3
        Me.btncalc.Text = "Calculate"
        Me.btncalc.UseVisualStyleBackColor = True
        '
        'lbloutput
        '
        Me.lbloutput.AutoSize = True
        Me.lbloutput.Location = New System.Drawing.Point(12, 118)
        Me.lbloutput.Name = "lbloutput"
        Me.lbloutput.Size = New System.Drawing.Size(48, 13)
        Me.lbloutput.TabIndex = 4
        Me.lbloutput.Text = "Volume: "
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(284, 261)
        Me.Controls.Add(Me.lbloutput)
        Me.Controls.Add(Me.btncalc)
        Me.Controls.Add(Me.txtboxd3)
        Me.Controls.Add(Me.txtboxd1)
        Me.Controls.Add(Me.txtboxd2)
        Me.Name = "Form1"
        Me.Text = "Volume"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents txtboxd2 As TextBox
    Friend WithEvents txtboxd1 As TextBox
    Friend WithEvents txtboxd3 As TextBox
    Friend WithEvents btncalc As Button
    Friend WithEvents lbloutput As Label
End Class
