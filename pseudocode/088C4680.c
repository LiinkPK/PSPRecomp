/* Entry 0x088C4680 | file offset 0x000C1658 | FUN_088c4680 | bytes 160 */

bool FUN_088c4680(int *param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = 0;
  param_1[1] = *param_3;
  iVar3 = 0;
  do {
    uVar1 = FUN_088cb164(param_2,(int)(char)(&DAT_089cbb7a)[iVar3]);
    iVar2 = FUN_088cbb60(uVar1);
    if (iVar2 == 0) {
      *param_1 = *param_1 + 1;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x1f);
  return param_1[1] <= *param_1;
}

