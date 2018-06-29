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
        Me.components = New System.ComponentModel.Container()
        Me.lblhello = New System.Windows.Forms.Label()
        Me.PictureBox1 = New System.Windows.Forms.PictureBox()
        Me.btnshow = New System.Windows.Forms.Button()
        Me.btnexit = New System.Windows.Forms.Button()
        Me.tmrappear = New System.Windows.Forms.Timer(Me.components)
        Me.tmrdisappear = New System.Windows.Forms.Timer(Me.components)
        Me.tmrreappear = New System.Windows.Forms.Timer(Me.components)
        CType(Me.PictureBox1, System.ComponentModel.ISupportInitialize).BeginInit()
        Me.SuspendLayout()
        '
        'lblhello
        '
        Me.lblhello.AutoSize = True
        Me.lblhello.BackColor = System.Drawing.SystemColors.ActiveCaptionText
        Me.lblhello.ForeColor = System.Drawing.Color.Yellow
        Me.lblhello.Location = New System.Drawing.Point(107, 9)
        Me.lblhello.Name = "lblhello"
        Me.lblhello.Size = New System.Drawing.Size(69, 13)
        Me.lblhello.TabIndex = 0
        Me.lblhello.Text = "What's This?"
        '
        'PictureBox1
        '
        Me.PictureBox1.Image = Global.ScaryD1.My.Resources.Resources.scary_spider
        Me.PictureBox1.Location = New System.Drawing.Point(31, 29)
        Me.PictureBox1.Name = "PictureBox1"
        Me.PictureBox1.Size = New System.Drawing.Size(214, 143)
        Me.PictureBox1.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage
        Me.PictureBox1.TabIndex = 1
        Me.PictureBox1.TabStop = False
        Me.PictureBox1.Visible = False
        '
        'btnshow
        '
        Me.btnshow.Location = New System.Drawing.Point(31, 192)
        Me.btnshow.Name = "btnshow"
        Me.btnshow.Size = New System.Drawing.Size(141, 23)
        Me.btnshow.TabIndex = 2
        Me.btnshow.Text = "Show my scary spider!"
        Me.btnshow.UseVisualStyleBackColor = True
        '
        'btnexit
        '
        Me.btnexit.BackgroundImage = Global.ScaryD1.My.Resources.Resources.stop_sign
        Me.btnexit.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch
        Me.btnexit.Location = New System.Drawing.Point(193, 178)
        Me.btnexit.Name = "btnexit"
        Me.btnexit.Size = New System.Drawing.Size(52, 51)
        Me.btnexit.TabIndex = 3
        Me.btnexit.UseVisualStyleBackColor = True
        '
        'tmrappear
        '
        Me.tmrappear.Enabled = True
        Me.tmrappear.Interval = 5000
        '
        'tmrdisappear
        '
        Me.tmrdisappear.Enabled = True
        Me.tmrdisappear.Interval = 10000
        '
        'tmrreappear
        '
        Me.tmrreappear.Enabled = True
        Me.tmrreappear.Interval = 15000
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(284, 261)
        Me.Controls.Add(Me.btnexit)
        Me.Controls.Add(Me.btnshow)
        Me.Controls.Add(Me.PictureBox1)
        Me.Controls.Add(Me.lblhello)
        Me.Name = "Form1"
        Me.Text = "Scary Spider D1"
        CType(Me.PictureBox1, System.ComponentModel.ISupportInitialize).EndInit()
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub
    Friend WithEvents lblhello As System.Windows.Forms.Label
    Friend WithEvents PictureBox1 As System.Windows.Forms.PictureBox
    Friend WithEvents btnshow As System.Windows.Forms.Button
    Friend WithEvents btnexit As System.Windows.Forms.Button
    Friend WithEvents tmrappear As System.Windows.Forms.Timer
    Friend WithEvents tmrdisappear As System.Windows.Forms.Timer
    Friend WithEvents tmrreappear As System.Windows.Forms.Timer

End Class
