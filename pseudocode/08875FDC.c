/* Entry 0x08875FDC | file offset 0x00072FB4 | FUN_08875fdc | bytes 852 */

void FUN_08875fdc(float param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6,undefined4 param_7,undefined4 param_8)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  uint uVar8;
  int iVar9;
  
  FUN_089a0ee4();
  FUN_089a0fc8();
  FUN_089a02e0(1,param_3,0x200);
  FUN_089a0f04(0,0x200,0x200,0x200,param_4);
  if (param_5 < 2) {
    if (-1 < param_5) {
      if (param_5 < 1) {
        FUN_089a0e20(0,0);
        FUN_089a0db8(6,0,0,0);
        FUN_089a0384(9);
        FUN_089a1024(2,&DAT_089d6050);
        FUN_089a0fe8(1,param_7,0x1f,0);
        uVar8 = (uint)(param_1 * 255.0);
        if (0xff < (int)uVar8) {
          uVar8 = 0xff;
        }
        if ((int)uVar8 < 0) {
          uVar8 = 0;
        }
        FUN_089a0c8c(uVar8 | 0xff000000);
      }
      else {
        FUN_089a0e20(3,0);
        FUN_089a0db8(6,0,0,0);
        FUN_089a0384(9);
        if (*(char *)(param_2 + 0x14) == '\0') {
          FUN_089a1024(2,&DAT_089d6090);
        }
        else {
          FUN_089a1024(2,&DAT_089d60d0);
        }
        FUN_089a0fe8(1,0,0x1f,0);
      }
    }
  }
  else if (param_5 < 3) {
    FUN_089a03dc(9);
    FUN_089a0c8c(param_8);
  }
  else if (param_5 < 4) {
    FUN_089a0e20(0,0);
    FUN_089a0db8(1,0,0,0);
    FUN_089a0384(9);
    FUN_089a0c8c(param_8);
  }
  if (param_6 < 1) {
    if (-1 < param_6) {
      FUN_089a12a4(0,2,3,0,0);
    }
  }
  else if (param_6 < 2) {
    FUN_089a12a4(0,2,10,0,0xffffffff);
  }
  else if (param_6 < 3) {
    FUN_089a12a4(2,2,10,0,0xffffffff);
  }
  puVar1 = (undefined2 *)FUN_089a00f4(0xa0);
  iVar3 = 0;
  iVar6 = 0;
  puVar2 = puVar1;
  do {
    iVar4 = 0;
    iVar5 = 0;
    do {
      iVar9 = iVar5 / 3;
      uVar7 = (undefined2)(iVar6 / 3);
      puVar2[1] = uVar7;
      puVar2[3] = uVar7;
      puVar2[4] = 0;
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x1e0;
      uVar7 = (undefined2)iVar9;
      *puVar2 = uVar7;
      puVar2[2] = uVar7;
      puVar2 = puVar2 + 5;
    } while (iVar4 < 4);
    iVar3 = iVar3 + 1;
    iVar6 = iVar6 + 0x110;
  } while (iVar3 < 4);
  FUN_0899ff9c(4,4);
  FUN_089a06d8(0x800102,4,4,0,puVar1);
  return;
}

