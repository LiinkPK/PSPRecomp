/* Entry 0x088DF824 | file offset 0x000DC7FC | FUN_088df824 | bytes 60 */

bool FUN_088df824(int param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_088df7e4();
  if (iVar2 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)(param_1 + 8) == 0;
  }
  return bVar1;
}

