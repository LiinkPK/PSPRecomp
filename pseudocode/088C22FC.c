/* Entry 0x088C22FC | file offset 0x000BF2D4 | FUN_088c22fc | bytes 48 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089d74a4. Boundary still requires runtime validation. */

undefined4
FUN_088c22fc(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  
  iVar1 = *(int *)(param_5 + 4);
  *(int *)(DAT_089d712c + 0x1de00) = *(int *)(DAT_089d712c + 0x1de00) + iVar1;
  *(int *)(param_2 + 4) = iVar1;
  return 1;
}

