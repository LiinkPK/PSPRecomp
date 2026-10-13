/* Entry 0x088C04B4 | file offset 0x000BD48C | FUN_088c04b4 | bytes 68 */

int FUN_088c04b4(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_088c04f8(param_2);
  iVar2 = 0;
  if (-1 < iVar1) {
    iVar2 = param_1 + iVar1 * 0x57c;
  }
  return iVar2;
}

