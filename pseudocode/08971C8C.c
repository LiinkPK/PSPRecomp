/* Entry 0x08971C8C | file offset 0x0016EC64 | FUN_08971c8c | bytes 112 */

int FUN_08971c8c(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_08941dc0();
  iVar2 = -1;
  if (iVar1 != -1) {
    FUN_0897154c(*(undefined4 *)(*param_1 + iVar1 * 4),param_2,param_1[10]);
    iVar2 = iVar1;
  }
  return iVar2;
}

