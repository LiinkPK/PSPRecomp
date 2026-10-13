/* Entry 0x08886588 | file offset 0x00083560 | FUN_08886588 | bytes 104 */

void FUN_08886588(int param_1,char param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
    if (param_2 == '\0') {
      FUN_088d9f5c(iVar1,2,1);
      *(undefined2 *)(*(int *)(param_1 + 4) + 0xe) = 0xffff;
    }
    else {
      FUN_088d9f5c(iVar1,0xffffffff,1);
    }
  }
  return;
}

