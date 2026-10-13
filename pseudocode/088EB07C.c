/* Entry 0x088EB07C | file offset 0x000E8054 | FUN_088eb07c | bytes 40 */

int FUN_088eb07c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x78) + 1;
  if (*(int *)(param_1 + 0x6c) <= iVar1) {
    iVar1 = 0;
  }
  return iVar1;
}

