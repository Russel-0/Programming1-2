
import javax.swing.JOptionPane;


public class frmCalculator extends javax.swing.JFrame {

   
    public frmCalculator() {
        initComponents();
    }

    
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        popupMenu1 = new java.awt.PopupMenu();
        jPanel1 = new javax.swing.JPanel();
        title = new javax.swing.JLabel();
        Pg = new javax.swing.JLabel();
        Fg = new javax.swing.JLabel();
        Mg = new javax.swing.JLabel();
        R = new javax.swing.JLabel();
        sG = new javax.swing.JLabel();
        btnEnter = new javax.swing.JButton();
        btnClear = new javax.swing.JButton();
        txtPg = new javax.swing.JTextField();
        txtFg = new javax.swing.JTextField();
        txtMg = new javax.swing.JTextField();
        txtR = new javax.swing.JTextField();
        txtAve = new javax.swing.JTextField();
        ave = new javax.swing.JLabel();
        txtSg = new javax.swing.JTextField();

        popupMenu1.setLabel("popupMenu1");

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setAutoRequestFocus(false);
        setBackground(new java.awt.Color(255, 204, 204));
        setResizable(false);
        addComponentListener(new java.awt.event.ComponentAdapter() {
            public void componentShown(java.awt.event.ComponentEvent evt) {
                formComponentShown(evt);
            }
        });

        jPanel1.setBackground(new java.awt.Color(0, 0, 0));
        jPanel1.setForeground(new java.awt.Color(255, 255, 255));

        title.setFont(new java.awt.Font("Tahoma", 0, 48)); // NOI18N
        title.setForeground(new java.awt.Color(255, 255, 255));
        title.setText("Grade Calculator");

        javax.swing.GroupLayout jPanel1Layout = new javax.swing.GroupLayout(jPanel1);
        jPanel1.setLayout(jPanel1Layout);
        jPanel1Layout.setHorizontalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanel1Layout.createSequentialGroup()
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                .addComponent(title)
                .addGap(58, 58, 58))
        );
        jPanel1Layout.setVerticalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addGap(21, 21, 21)
                .addComponent(title)
                .addContainerGap(21, Short.MAX_VALUE))
        );

        Pg.setFont(new java.awt.Font("Tahoma", 0, 24)); // NOI18N
        Pg.setText("Enter Prelims Grade :");

        Fg.setFont(new java.awt.Font("Tahoma", 0, 24)); // NOI18N
        Fg.setText("Enter Finals Grade :");

        Mg.setFont(new java.awt.Font("Tahoma", 0, 24)); // NOI18N
        Mg.setText("Enter Midterms Grade :");

        R.setFont(new java.awt.Font("Tahoma", 0, 24)); // NOI18N
        R.setText("Remarks:");

        sG.setFont(new java.awt.Font("Tahoma", 0, 24)); // NOI18N
        sG.setText("System Grade: ");

        btnEnter.setFont(new java.awt.Font("Tahoma", 0, 18)); // NOI18N
        btnEnter.setText("Enter");
        btnEnter.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnEnterActionPerformed(evt);
            }
        });

        btnClear.setFont(new java.awt.Font("Tahoma", 0, 18)); // NOI18N
        btnClear.setText("Clear");
        btnClear.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnClearActionPerformed(evt);
            }
        });

        txtPg.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                txtPgActionPerformed(evt);
            }
        });
        txtPg.addKeyListener(new java.awt.event.KeyAdapter() {
            public void keyTyped(java.awt.event.KeyEvent evt) {
                txtPgKeyTyped(evt);
            }
        });

        txtFg.addKeyListener(new java.awt.event.KeyAdapter() {
            public void keyTyped(java.awt.event.KeyEvent evt) {
                txtFgKeyTyped(evt);
            }
        });

        txtMg.addKeyListener(new java.awt.event.KeyAdapter() {
            public void keyTyped(java.awt.event.KeyEvent evt) {
                txtMgKeyTyped(evt);
            }
        });

        txtR.setEditable(false);

        txtAve.setEditable(false);
        txtAve.addComponentListener(new java.awt.event.ComponentAdapter() {
            public void componentShown(java.awt.event.ComponentEvent evt) {
                txtAveComponentShown(evt);
            }
        });
        txtAve.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                txtAveActionPerformed(evt);
            }
        });

        ave.setFont(new java.awt.Font("Tahoma", 0, 24)); // NOI18N
        ave.setText("Average:");

        txtSg.setEditable(false);

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
            .addGroup(layout.createSequentialGroup()
                .addGap(43, 43, 43)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(layout.createSequentialGroup()
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(Fg)
                            .addComponent(Pg)
                            .addComponent(Mg))
                        .addGap(18, 18, 18)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING, false)
                            .addComponent(txtMg, javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(txtPg, javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(txtFg, javax.swing.GroupLayout.PREFERRED_SIZE, 100, javax.swing.GroupLayout.PREFERRED_SIZE)))
                    .addGroup(layout.createSequentialGroup()
                        .addGap(169, 169, 169)
                        .addComponent(btnEnter, javax.swing.GroupLayout.PREFERRED_SIZE, 94, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addGap(16, 16, 16)
                        .addComponent(btnClear, javax.swing.GroupLayout.PREFERRED_SIZE, 94, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addGroup(layout.createSequentialGroup()
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(sG)
                            .addComponent(ave)
                            .addComponent(R))
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                            .addComponent(txtAve, javax.swing.GroupLayout.DEFAULT_SIZE, 120, Short.MAX_VALUE)
                            .addComponent(txtSg)
                            .addComponent(txtR))))
                .addContainerGap(56, Short.MAX_VALUE))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addComponent(jPanel1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(65, 65, 65)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(Pg)
                    .addComponent(txtPg, javax.swing.GroupLayout.PREFERRED_SIZE, 29, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(Mg)
                    .addComponent(txtMg, javax.swing.GroupLayout.PREFERRED_SIZE, 29, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                    .addComponent(txtFg, javax.swing.GroupLayout.PREFERRED_SIZE, 29, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(Fg))
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(ave)
                    .addComponent(txtAve, javax.swing.GroupLayout.PREFERRED_SIZE, 29, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(sG)
                    .addComponent(txtSg, javax.swing.GroupLayout.PREFERRED_SIZE, 29, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(txtR, javax.swing.GroupLayout.PREFERRED_SIZE, 29, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(R))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 56, Short.MAX_VALUE)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(btnClear, javax.swing.GroupLayout.PREFERRED_SIZE, 45, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(btnEnter, javax.swing.GroupLayout.PREFERRED_SIZE, 45, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(74, 74, 74))
        );

        pack();
        setLocationRelativeTo(null);
    }// </editor-fold>//GEN-END:initComponents

    private void btnEnterActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnEnterActionPerformed
        // enter button
        
        double pg, mg, fg, ave;
        
        pg = Double.parseDouble(txtPg.getText());
        mg = Double.parseDouble(txtMg.getText());
        fg = Double.parseDouble(txtFg.getText());
        
        if(pg < 60 || pg > 100 || mg < 60 || mg > 100 || fg < 60 || fg > 100){
            JOptionPane.showMessageDialog(this, "INVALID GRADE\nENTER BETWEEN 60 and 100", "Warning", JOptionPane.WARNING_MESSAGE);
            return;
        }
        
        ave = (pg * .30) + (mg * .30) + (fg * .40);
        
        txtAve.setText(Double.toString(ave));
        
        if(ave >= 97.5){            
            txtSg.setText("1.00");
            txtR.setText("Passed");
        }else if(ave >= 94.5){
            txtSg.setText("1.25");
            txtR.setText("Passed");
        }else if(ave >= 91.5){
            txtSg.setText("1.50");
            txtR.setText("Passed");
        }else if(ave >= 87.5){
            txtSg.setText("1.75");
            txtR.setText("Passed");
        }else if(ave >= 84.5){
            txtSg.setText("2.00");
            txtR.setText("Passed");
        }else if(ave >= 81.5){
            txtSg.setText("2.25");
            txtR.setText("Passed");
        }else if(ave >= 78.5){;
            txtSg.setText("2.50");
            txtR.setText("Passed");
        }else if(ave >= 75.5){
            txtSg.setText("2.75");
            txtR.setText("Passed");
        }else if(ave >= 74.5){
            txtSg.setText("3.00");
            txtR.setText("Passed");
        }else if(ave >= 72.5){
            txtSg.setText("INC");
            txtR.setText("INC");
        }else if(ave < 72.5){
            txtSg.setText("5.00");
            txtR.setText("Failed");
        }
    }//GEN-LAST:event_btnEnterActionPerformed

    private void btnClearActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnClearActionPerformed
        // to clear 
        
        txtPg.setText("");
        txtMg.setText("");
        txtFg.setText("");
        txtAve.setText("");
        txtSg.setText("");
        txtR.setText("");
    }//GEN-LAST:event_btnClearActionPerformed

    private void txtPgActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_txtPgActionPerformed
        // TODO add your handling code here:
        
    }//GEN-LAST:event_txtPgActionPerformed

    private void txtAveActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_txtAveActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_txtAveActionPerformed

    private void txtAveComponentShown(java.awt.event.ComponentEvent evt) {//GEN-FIRST:event_txtAveComponentShown

        // TODO add your handling code here:
    }//GEN-LAST:event_txtAveComponentShown

    private void formComponentShown(java.awt.event.ComponentEvent evt) {//GEN-FIRST:event_formComponentShown
        // TODO add your handling code here:
    }//GEN-LAST:event_formComponentShown

    private void txtPgKeyTyped(java.awt.event.KeyEvent evt) {//GEN-FIRST:event_txtPgKeyTyped
        // TODO add your handling code here:
    }//GEN-LAST:event_txtPgKeyTyped

    private void txtMgKeyTyped(java.awt.event.KeyEvent evt) {//GEN-FIRST:event_txtMgKeyTyped
        // TODO add your handling code here:
    }//GEN-LAST:event_txtMgKeyTyped

    private void txtFgKeyTyped(java.awt.event.KeyEvent evt) {//GEN-FIRST:event_txtFgKeyTyped
        // TODO add your handling code here:
    }//GEN-LAST:event_txtFgKeyTyped

    public static void main(String args[]) {
        
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new frmCalculator().setVisible(true);
            }
        });
    }
    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JLabel Fg;
    private javax.swing.JLabel Mg;
    private javax.swing.JLabel Pg;
    private javax.swing.JLabel R;
    private javax.swing.JLabel ave;
    private javax.swing.JButton btnClear;
    private javax.swing.JButton btnEnter;
    private javax.swing.JPanel jPanel1;
    private java.awt.PopupMenu popupMenu1;
    private javax.swing.JLabel sG;
    private javax.swing.JLabel title;
    private javax.swing.JTextField txtAve;
    private javax.swing.JTextField txtFg;
    private javax.swing.JTextField txtMg;
    private javax.swing.JTextField txtPg;
    private javax.swing.JTextField txtR;
    private javax.swing.JTextField txtSg;
    // End of variables declaration//GEN-END:variables
}
