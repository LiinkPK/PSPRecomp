/* Entry 0x088A1758 | file offset 0x0009E730 | FUN_088a1758 | bytes 76 */

bool FUN_088a1758(undefined4 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  if (param_2 == -1) {
    bVar1 = false;
  }
  else {
    FUN_08990968(param_2,0,0);
    iVar2 = FUN_08990820(param_2);
    bVar1 = iVar2 != -1;
  }
  return bVar1;
}

