/* Entry 0x088B2040 | file offset 0x000AF018 | FUN_088b2040 | bytes 380 */

int FUN_088b2040(int param_1,undefined2 *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined2 local_28;
  undefined2 local_26;
  
  iVar4 = 0;
  if ((*(short *)(param_5 + *(char *)(param_5 + 0x773) * 0xc6 + 0xb2 + *(int *)(param_1 + 4) * 2) !=
       -1) && (iVar1 = FUN_088b29d8(), iVar1 != 0)) {
    if (((int)*(char *)(iVar1 + 0x12) == *(int *)(param_1 + 8)) &&
       (((*(short *)(iVar1 + 6) != -1 && (iVar1 = FUN_088bff40(), iVar1 != 0)) &&
        (iVar5 = 0, 0 < *(short *)(iVar1 + 2))))) {
      iVar3 = 0;
      do {
        psVar2 = (short *)(*(int *)(iVar1 + 4) + iVar3);
        if ((*psVar2 == param_4) && (iVar4 < param_3)) {
          FUN_088bffc0(&local_30,psVar2);
          *param_2 = local_30;
          param_2[1] = local_2e;
          param_2[2] = local_2c;
          param_2[3] = local_2a;
          param_2[4] = local_28;
          param_2[5] = local_26;
          iVar4 = iVar4 + 1;
          param_2 = param_2 + 6;
        }
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + 8;
      } while (iVar5 < *(short *)(iVar1 + 2));
    }
  }
  return iVar4;
}

