/* Entry 0x08959E44 | file offset 0x00156E1C | FUN_08959e44 | bytes 116 */

bool FUN_08959e44(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0895e058(0x44);
  iVar2 = 0;
  if (iVar1 != 0) {
    FUN_0895c890(iVar1,param_3);
    iVar2 = iVar1;
  }
  *param_4 = iVar2;
  return iVar2 != 0;
}

