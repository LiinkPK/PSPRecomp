/* Entry 0x088F3704 | file offset 0x000F06DC | FUN_088f3704 | bytes 96 */

undefined4 FUN_088f3704(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = param_1;
  do {
    if (*piVar1 == 0) {
      FUN_088f3550(param_1,iVar2,param_2);
      return 1;
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 0x36;
  } while (iVar2 < 5);
  return 0;
}

