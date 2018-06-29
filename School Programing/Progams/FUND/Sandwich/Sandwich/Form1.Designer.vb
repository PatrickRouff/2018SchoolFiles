<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()>
Partial Class Form1
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()>
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
    <System.Diagnostics.DebuggerStepThrough()>
    Private Sub InitializeComponent()
        Me.radhalf = New System.Windows.Forms.RadioButton()
        Me.grpsize = New System.Windows.Forms.GroupBox()
        Me.radfoot = New System.Windows.Forms.RadioButton()
        Me.Button1 = New System.Windows.Forms.Button()
        Me.chklettuce = New System.Windows.Forms.CheckBox()
        Me.chktomato = New System.Windows.Forms.CheckBox()
        Me.chkcheese = New System.Windows.Forms.CheckBox()
        Me.grpextra = New System.Windows.Forms.GroupBox()
        Me.btnexit = New System.Windows.Forms.Button()
        Me.chkmustard = New System.Windows.Forms.CheckBox()
        Me.grpsize.SuspendLayout()
        Me.grpextra.SuspendLayout()
        Me.SuspendLayout()
        '
        'radhalf
        '
        Me.radhalf.AutoSize = True
        Me.radhalf.Location = New System.Drawing.Point(6, 19)
        Me.radhalf.Name = "radhalf"
        Me.radhalf.Size = New System.Drawing.Size(39, 17)
        Me.radhalf.TabIndex = 0
        Me.radhalf.TabStop = True
        Me.radhalf.Text = "6in"
        Me.radhalf.UseVisualStyleBackColor = True
        '
        'grpsize
        '
        Me.grpsize.Controls.Add(Me.radfoot)
        Me.grpsize.Controls.Add(Me.radhalf)
        Me.grpsize.Location = New System.Drawing.Point(12, 12)
        Me.grpsize.Name = "grpsize"
        Me.grpsize.Size = New System.Drawing.Size(89, 100)
        Me.grpsize.TabIndex = 1
        Me.grpsize.TabStop = False
        Me.grpsize.Text = "Size:"
        '
        'radfoot
        '
        Me.radfoot.AutoSize = True
        Me.radfoot.Location = New System.Drawing.Point(6, 42)
        Me.radfoot.Name = "radfoot"
        Me.radfoot.Size = New System.Drawing.Size(73, 17)
        Me.radfoot.TabIndex = 1
        Me.radfoot.TabStop = True
        Me.radfoot.Text = "Foot Long"
        Me.radfoot.UseVisualStyleBackColor = True
        '
        'Button1
        '
        Me.Button1.Location = New System.Drawing.Point(12, 118)
        Me.Button1.Name = "Button1"
        Me.Button1.Size = New System.Drawing.Size(75, 23)
        Me.Button1.TabIndex = 6
        Me.Button1.Text = "Price"
        Me.Button1.UseVisualStyleBackColor = True
        '
        'chklettuce
        '
        Me.chklettuce.AutoSize = True
        Me.chklettuce.Location = New System.Drawing.Point(7, 19)
        Me.chklettuce.Name = "chklettuce"
        Me.chklettuce.Size = New System.Drawing.Size(62, 17)
        Me.chklettuce.TabIndex = 0
        Me.chklettuce.Text = "Lettuce"
        Me.chklettuce.UseVisualStyleBackColor = True
        '
        'chktomato
        '
        Me.chktomato.AutoSize = True
        Me.chktomato.Location = New System.Drawing.Point(7, 42)
        Me.chktomato.Name = "chktomato"
        Me.chktomato.Size = New System.Drawing.Size(62, 17)
        Me.chktomato.TabIndex = 1
        Me.chktomato.Text = "Tomato"
        Me.chktomato.UseVisualStyleBackColor = True
        '
        'chkcheese
        '
        Me.chkcheese.AutoSize = True
        Me.chkcheese.Location = New System.Drawing.Point(75, 19)
        Me.chkcheese.Name = "chkcheese"
        Me.chkcheese.Size = New System.Drawing.Size(62, 17)
        Me.chkcheese.TabIndex = 2
        Me.chkcheese.Text = "Cheese"
        Me.chkcheese.UseVisualStyleBackColor = True
        '
        'grpextra
        '
        Me.grpextra.Controls.Add(Me.chkmustard)
        Me.grpextra.Controls.Add(Me.chkcheese)
        Me.grpextra.Controls.Add(Me.chktomato)
        Me.grpextra.Controls.Add(Me.chklettuce)
        Me.grpextra.Location = New System.Drawing.Point(107, 12)
        Me.grpextra.Name = "grpextra"
        Me.grpextra.Size = New System.Drawing.Size(143, 100)
        Me.grpextra.TabIndex = 4
        Me.grpextra.TabStop = False
        Me.grpextra.Text = "Extras:"
        '
        'btnexit
        '
        Me.btnexit.Location = New System.Drawing.Point(93, 118)
        Me.btnexit.Name = "btnexit"
        Me.btnexit.Size = New System.Drawing.Size(75, 23)
        Me.btnexit.TabIndex = 13
        Me.btnexit.Text = "Exit"
        Me.btnexit.UseVisualStyleBackColor = True
        '
        'chkmustard
        '
        Me.chkmustard.AutoSize = True
        Me.chkmustard.Location = New System.Drawing.Point(75, 42)
        Me.chkmustard.Name = "chkmustard"
        Me.chkmustard.Size = New System.Drawing.Size(64, 17)
        Me.chkmustard.TabIndex = 3
        Me.chkmustard.Text = "Mustard"
        Me.chkmustard.UseVisualStyleBackColor = True
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(265, 150)
        Me.Controls.Add(Me.btnexit)
        Me.Controls.Add(Me.grpextra)
        Me.Controls.Add(Me.Button1)
        Me.Controls.Add(Me.grpsize)
        Me.Name = "Form1"
        Me.Text = "Form1"
        Me.grpsize.ResumeLayout(False)
        Me.grpsize.PerformLayout()
        Me.grpextra.ResumeLayout(False)
        Me.grpextra.PerformLayout()
        Me.ResumeLayout(False)

    End Sub

    Friend WithEvents radhalf As RadioButton
    Friend WithEvents grpsize As GroupBox
    Friend WithEvents radfoot As RadioButton
    Friend WithEvents Button1 As Button
    Friend WithEvents chklettuce As CheckBox
    Friend WithEvents chktomato As CheckBox
    Friend WithEvents chkcheese As CheckBox
    Friend WithEvents grpextra As GroupBox
    Friend WithEvents btnexit As Button
    Friend WithEvents chkmustard As CheckBox
End Class
