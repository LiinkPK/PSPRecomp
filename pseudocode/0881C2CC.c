/* Entry 0x0881C2CC | file offset 0x000192A4 | FUN_0881c2cc | bytes 292 */

undefined4 FUN_0881c2cc(char *param_1,short *param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*param_1 == '\0') {
    uVar1 = 0xffffffff;
  }
  else if (param_2 == (short *)0x0) {
    uVar1 = 0xfffffffe;
  }
  else if (param_1[8] == '\x01') {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_08899300();
    FUN_088981b4(uVar1,(int)*param_2,param_3,1);
    FUN_0881c3f0(param_1,(int)*param_2,param_3);
    iVar3 = 0;
    if (0 < param_2[0xc]) {
      do {
        uVar2 = FUN_0881e83c(DAT_089d4910,param_2,iVar3);
        FUN_088981b4(uVar1,uVar2,param_3,1);
        FUN_0881c3f0(param_1,uVar2,param_3);
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_2[0xc]);
    }
    uVar1 = 0;
  }
  return uVar1;
}

