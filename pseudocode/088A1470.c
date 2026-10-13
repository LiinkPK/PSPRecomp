/* Entry 0x088A1470 | file offset 0x0009E448 | FUN_088a1470 | bytes 96 */

bool FUN_088a1470(undefined4 param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  
  if (param_3 == '\x01') {
    iVar1 = FUN_08991660(param_2,3,0,0);
  }
  else {
    iVar1 = FUN_08991660(param_2,4,0,0);
  }
  return iVar1 != -1;
}

