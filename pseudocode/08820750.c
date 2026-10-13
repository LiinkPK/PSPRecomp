/* Entry 0x08820750 | file offset 0x0001D728 | FUN_08820750 | bytes 348 */

undefined4 FUN_08820750(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (*param_1 == '\0') {
    uVar2 = 0xffffffff;
  }
  else {
    param_1[8] = '\x01';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    uVar2 = FUN_08820c50(param_1);
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    uVar2 = FUN_08820b54(param_1);
    *(undefined4 *)(param_1 + 0x14) = uVar2;
    uVar2 = FUN_08820b9c(param_1);
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    param_1[0x1c] = '\0';
    param_1[0x28] = '\0';
    param_1[0x29] = '\0';
    param_1[0x2a] = '\0';
    param_1[0x2b] = '\0';
    param_1[0x20] = '\0';
    param_1[0x21] = '\0';
    param_1[0x22] = -0x80;
    param_1[0x23] = '?';
    param_1[0x24] = '\0';
    param_1[0x25] = '\0';
    param_1[0x26] = -0x80;
    param_1[0x27] = '?';
    param_1[0x2c] = '\0';
    param_1[0x2d] = '\0';
    param_1[0x2e] = '\0';
    param_1[0x2f] = '\0';
    param_1[0x30] = '\0';
    param_1[0x31] = '\0';
    param_1[0x32] = '\0';
    param_1[0x33] = '\0';
    param_1[0x34] = '\0';
    param_1[0x35] = '\0';
    param_1[0x36] = '\0';
    param_1[0x37] = '\0';
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x34);
    if (iVar1 < 1) {
      if (-1 < iVar1) {
        FUN_088208ac(0,param_1);
      }
    }
    else if (iVar1 < 2) {
      param_1[8] = '\x03';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      uVar2 = FUN_08820c2c(param_1);
      *(undefined4 *)(param_1 + 0x10) = uVar2;
      FUN_088208ac(0,param_1);
    }
    else if (iVar1 < 3) {
      fVar3 = (float)FUN_08820c50(param_1);
      fVar4 = (float)FUN_08820c08(param_1);
      fVar5 = (float)FUN_08820c2c(param_1);
      fVar6 = (float)FUN_08820be4(param_1);
      uVar2 = FUN_08820cbc(0,fVar3 + fVar4 + fVar5 * fVar6,param_1);
      FUN_088208ac(uVar2,param_1);
    }
    uVar2 = 0;
  }
  return uVar2;
}

