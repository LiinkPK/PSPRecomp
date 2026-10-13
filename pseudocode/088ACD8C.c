/* Entry 0x088ACD8C | file offset 0x000A9D64 | FUN_088acd8c | bytes 68 */

undefined4 FUN_088acd8c(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((((param_2 < 0) && (iVar2 = *(int *)(param_1 + 0x210), iVar2 != 5)) && (iVar2 != 4)) &&
     ((iVar2 != 7 && (iVar2 != 8)))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

