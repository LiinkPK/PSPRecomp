/* Entry 0x088C7018 | file offset 0x000C3FF0 | FUN_088c7018 | bytes 512 */

undefined4
FUN_088c7018(undefined2 *param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4,
            int param_5)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  int local_30 [3];
  
  iVar2 = FUN_088c0f8c(param_4);
  iVar3 = FUN_088c7780(local_30,0,(int)*(char *)(iVar2 + 0xc),param_5);
  if (iVar3 < 1) {
    uVar4 = 0;
  }
  else {
    iVar2 = FUN_088c7ef4((int)*(char *)(iVar2 + 0xd));
    local_30[2] = param_5;
    FUN_088c6fd4(param_1);
    *param_1 = param_2;
    param_1[1] = (short)param_4;
    param_1[2] = 3;
    FUN_08935524(param_1 + 4,param_3,0x1a);
    if (*(short *)(iVar2 + 2) != -1) {
      uVar4 = FUN_0887afbc(&DAT_09b4e828,(int)*(short *)(iVar2 + 2),0);
      FUN_08935524(param_1 + 0x11,uVar4,0x16);
    }
    iVar2 = 0;
    if (0 < iVar3) {
      iVar5 = 0;
      do {
        puVar6 = *(undefined2 **)((int)local_30 + iVar5);
        param_1[iVar2 + 0x1c] = *puVar6;
        *(undefined2 *)((int)param_1 + iVar5 + 0x3c) = puVar6[4];
        if ((*(byte *)((int)puVar6 + 0x13) & 1) == 0) {
          local_30[2] = local_30[2] * 0x343fd + 0x269ec3;
          *(short *)((int)param_1 + iVar5 + 0x3e) =
               (short)((int)(local_30[2] >> 0x10 & 0x7fffU) %
                      (((int)(short)puVar6[6] - (int)(short)puVar6[5]) + 1)) + puVar6[5];
        }
        else {
          *(undefined2 *)((int)param_1 + iVar5 + 0x3e) = 0x7fff;
        }
        iVar2 = iVar2 + 1;
        iVar5 = iVar2 * 4;
      } while (iVar2 < iVar3);
    }
    iVar3 = 0xf;
    iVar2 = 0;
    do {
      puVar6 = (undefined2 *)((int)param_1 + iVar2 + 8);
      uVar1 = puVar6[1];
      puVar7 = (undefined2 *)((int)param_1 + iVar2 + 0x44);
      *puVar7 = *puVar6;
      puVar7[1] = uVar1;
      iVar3 = iVar3 + -1;
      iVar2 = iVar2 + 4;
    } while (iVar3 != 0);
    uVar4 = 1;
  }
  return uVar4;
}

