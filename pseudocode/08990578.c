/* Entry 0x08990578 | file offset 0x0018D550 | FUN_08990578 | bytes 100 */

undefined4 FUN_08990578(void)

{
  undefined4 uVar1;
  
  sceKernelWaitSema(*(undefined4 *)(DAT_089da420 + 0x900),1,0);
  uVar1 = 0;
  if ((*(int *)(DAT_089da420 + 0x8fc) != 0) &&
     (*(char *)(*(int *)(DAT_089da420 + 0x8fc) + 0x40) == '\0')) {
    uVar1 = 1;
  }
  sceKernelSignalSema(*(undefined4 *)(DAT_089da420 + 0x900),1);
  return uVar1;
}

