/* Entry 0x088EB054 | file offset 0x000E802C | FUN_088eb054 | bytes 40 */

int FUN_088eb054(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x74) + 1;
  if (*(int *)(param_1 + 0x6c) <= iVar1) {
    iVar1 = 0;
  }
  return iVar1;
}

