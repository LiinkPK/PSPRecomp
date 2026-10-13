/* Entry 0x08814994 | file offset 0x0001196C | FUN_08814994 | bytes 172 */

int FUN_08814994(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  FUN_0883975c(param_1,9,param_2);
  *(undefined **)(param_1 + 0x544) = &DAT_089c7030;
  FUN_088371c4(param_1);
  *(undefined4 *)(param_1 + 0x38c) = *(undefined4 *)(param_1 + 0x38c);
  *(uint *)(param_1 + 0x388) = *(uint *)(param_1 + 0x388) | 0x4000;
  FUN_08834bb8(param_1,0,0);
  iVar1 = DAT_089d4958;
  piVar2 = (int *)(DAT_089d4958 + 0x34);
  if (*(int *)(DAT_089d4958 + 0x38) == 0) {
    *(int *)(DAT_089d4958 + 0x38) = param_1;
    *piVar2 = param_1;
    *(undefined4 *)(param_1 + 0x550) = 0;
  }
  else {
    *(int *)(*(int *)(DAT_089d4958 + 0x38) + 0x550) = param_1;
    *(undefined4 *)(param_1 + 0x550) = 0;
    *(int *)(iVar1 + 0x38) = param_1;
  }
  return param_1;
}

