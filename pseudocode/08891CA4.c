/* Entry 0x08891CA4 | file offset 0x0008EC7C | FUN_08891ca4 | bytes 224 */

undefined4 FUN_08891ca4(undefined4 param_1,undefined4 *param_2,uint param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (((param_2 == (undefined4 *)0x0) || (1 < param_3)) || (param_4 < 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    puVar1 = (undefined4 *)FUN_088c6d0c();
    if (puVar1 == (undefined4 *)0x0) {
      uVar2 = 0xfffffffe;
    }
    else {
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      *param_2 = *puVar1;
      uVar2 = puVar1[3];
      param_2[1] = uVar3;
      uVar3 = puVar1[4];
      param_2[2] = uVar4;
      uVar4 = puVar1[5];
      param_2[3] = uVar2;
      uVar2 = puVar1[6];
      param_2[4] = uVar3;
      uVar3 = puVar1[7];
      param_2[5] = uVar4;
      uVar4 = puVar1[8];
      param_2[6] = uVar2;
      uVar2 = puVar1[9];
      param_2[7] = uVar3;
      uVar3 = puVar1[10];
      param_2[8] = uVar4;
      uVar4 = puVar1[0xb];
      param_2[9] = uVar2;
      uVar2 = puVar1[0xc];
      param_2[10] = uVar3;
      uVar3 = puVar1[0xd];
      param_2[0xb] = uVar4;
      uVar4 = puVar1[0xe];
      param_2[0xc] = uVar2;
      uVar2 = puVar1[0xf];
      param_2[0xd] = uVar3;
      param_2[0xe] = uVar4;
      param_2[0xf] = uVar2;
      uVar2 = 0;
    }
  }
  return uVar2;
}

